const express = require('express');
const mongoose = require('mongoose');
const app = express();
const PORT = process.env.PORT || 5000;

// Middleware
app.use(express.json());
app.use(require('body-parser').urlencoded({ extended: true }));
app.use(require('cors')());

mongoose
  .connect(process.env.MONGO_URI, { useNewUrlParser: true, useUnifiedTopology: true })
  .then(() => console.log('MongoDB connecté'))
  .catch(err => console.error('Erreur de connexion :', err));

const mongoose = require('mongoose');

const PatientSchema = new mongoose.Schema({
  name: String,
  age: Number,
  medicalHistory: String,
  progress: Array, // Historique des progrès.
});

module.exports = mongoose.model('Patient', PatientSchema);

const SessionSchema = new mongoose.Schema({
    patientId: mongoose.Schema.Types.ObjectId,
    date: Date,
    status: String, // Complétée, en attente, etc.
  });
  
module.exports = mongoose.model('Session', SessionSchema);
  

// Routes
app.get('/', (req, res) => res.send('API en cours de développement...'));

app.get('/api/patients', (req, res) => res.send('API en cours de développement...'));

app.get('/api/sessions', (req, res) => res.send('API en cours de développement...'));

app.listen(PORT, () => console.log(`Server running on http://localhost:${PORT}`));
