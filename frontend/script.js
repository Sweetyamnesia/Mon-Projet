fetch('http://localhost:5000/api/patients')
  .then(res => res.json())
  .then(data => console.log(data))
  .catch(err => console.error(err));
